// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
package org.chromium.chrome.browser.ntp.snippets;

import android.graphics.Bitmap;

import org.chromium.chrome.browser.ntp.cards.ItemViewType;
import org.chromium.chrome.browser.ntp.cards.Leaf;
import org.chromium.chrome.browser.ntp.cards.NewTabPageViewHolder;
import org.chromium.chrome.browser.ntp.snippets.ContentSuggestionsCardLayout.ContentSuggestionsCardLayoutEnum;

/**
 * Represents the data for an article card on the NTP.
 */
public class SnippetArticle extends Leaf {
    /** The category of this article. */
    public final int mCategory;

    /** The identifier for this article within the category - not necessarily unique globally. */
    public final String mIdWithinCategory;

    /** The title of this article. */
    public final String mTitle;

    /** The canonical publisher name (e.g., New York Times). */
    public final String mPublisher;

    /** The snippet preview text. */
    public final String mPreviewText;

    /** The URL of this article. */
    public final String mUrl;

    /** the AMP url for this article (possible for this to be empty). */
    public final String mAmpUrl;

    /** The time when this article was published. */
    public final long mPublishTimestampMilliseconds;

    /** The score expressing relative quality of the article for the user. */
    public final float mScore;

    /** The position of this article within its section. */
    public final int mPosition;

    /** The position of this article in the complete list. Populated by NewTabPageAdapter.*/
    public int mGlobalPosition = -1;

    /** The layout that should be used to display the snippet. */
    @ContentSuggestionsCardLayoutEnum
    public final int mCardLayout;

    /** Bitmap of the thumbnail, fetched lazily, when the RecyclerView wants to show the snippet. */
    private Bitmap mThumbnailBitmap;

    /** Stores whether impression of this article has been tracked already. */
    private boolean mImpressionTracked;

    /**
     * Creates a SnippetArticleListItem object that will hold the data.
     */
    public SnippetArticle(int category, String idWithinCategory, String title, String publisher,
            String previewText, String url, String ampUrl, long timestamp, float score,
            int position, @ContentSuggestionsCardLayoutEnum int cardLayout) {
        mCategory = category;
        mIdWithinCategory = idWithinCategory;
        mTitle = title;
        mPublisher = publisher;
        mPreviewText = previewText;
        mUrl = url;
        mAmpUrl = ampUrl;
        mPublishTimestampMilliseconds = timestamp;
        mScore = score;
        mPosition = position;
        mCardLayout = cardLayout;
    }

    @Override
    public boolean equals(Object other) {
        if (!(other instanceof SnippetArticle)) return false;
        SnippetArticle rhs = (SnippetArticle) other;
        return mCategory == rhs.mCategory && mIdWithinCategory.equals(rhs.mIdWithinCategory);
    }

    @Override
    public int hashCode() {
        return mCategory ^ mIdWithinCategory.hashCode();
    }

    @Override
    @ItemViewType
    public int getItemViewType() {
        return ItemViewType.SNIPPET;
    }

    @Override
    protected void onBindViewHolder(NewTabPageViewHolder holder) {
        assert holder instanceof SnippetArticleViewHolder;
        ((SnippetArticleViewHolder) holder).onBindViewHolder(this);
    }

    @Override
    public SnippetArticle getSuggestionAt(int position) {
        if (position != 0) throw new IndexOutOfBoundsException();

        return this;
    }

    /**
     * Returns this article's thumbnail as a {@link Bitmap}. Can return {@code null} as it is
     * initially unset.
     */
    public Bitmap getThumbnailBitmap() {
        return mThumbnailBitmap;
    }

    /** Sets the thumbnail bitmap for this article. */
    public void setThumbnailBitmap(Bitmap bitmap) {
        mThumbnailBitmap = bitmap;
    }

    /** Returns whether to track an impression for this article. */
    public boolean trackImpression() {
        // Track UMA only upon the first impression per life-time of this object.
        if (mImpressionTracked) return false;
        mImpressionTracked = true;
        return true;
    }

    @Override
    public String toString() {
        // For debugging purposes. Displays the first 42 characters of the title.
        return String.format("{%s, %1.42s}", getClass().getSimpleName(), mTitle);
    }
}
