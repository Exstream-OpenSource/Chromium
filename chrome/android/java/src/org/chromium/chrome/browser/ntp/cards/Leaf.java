// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.ntp.cards;

import org.chromium.chrome.browser.ntp.snippets.SnippetArticle;

/**
 * A leaf in the tree, i.e. a single item.
 */
public abstract class Leaf implements TreeNode {
    @Override
    public int getItemCount() {
        return 1;
    }

    @Override
    @ItemViewType
    public int getItemViewType(int position) {
        if (position != 0) throw new IndexOutOfBoundsException();
        return getItemViewType();
    }

    @Override
    public void onBindViewHolder(NewTabPageViewHolder holder, int position) {
        if (position != 0) throw new IndexOutOfBoundsException();
        onBindViewHolder(holder);
    }

    @Override
    public SnippetArticle getSuggestionAt(int position) {
        if (position != 0) throw new IndexOutOfBoundsException();

        return null;
    }

    /**
     * Display the data for this item.
     * @param holder The view holder that should be updated.
     * @see #onBindViewHolder(NewTabPageViewHolder, int)
     * @see android.support.v7.widget.RecyclerView.Adapter#onBindViewHolder
     */
    protected abstract void onBindViewHolder(NewTabPageViewHolder holder);

    /**
     * @return The view type of this item.
     * @see android.support.v7.widget.RecyclerView.Adapter#getItemViewType
     */
    @ItemViewType
    protected abstract int getItemViewType();
}
