{
  "layers": [
    {
      "name": "LayoutView #document",
      "bounds": [800, 600],
      "contentsOpaque": true,
      "drawsContent": true,
      "paintInvalidations": [
        {
          "object": "LayoutBlockFlow HTML",
          "rect": [10, 102, 285, 400],
          "reason": "forced by layout"
        },
        {
          "object": "LayoutBlockFlow DIV id='to-be-changed'",
          "rect": [18, 128, 269, 36],
          "reason": "full"
        },
        {
          "object": "LayoutText #text",
          "rect": [18, 128, 257, 35],
          "reason": "layoutObject removal"
        },
        {
          "object": "LayoutText #text",
          "rect": [18, 128, 84, 17],
          "reason": "layoutObject insertion"
        },
        {
          "object": "LayoutView #document",
          "rect": [295, 102, 15, 400],
          "reason": "scroll"
        }
      ]
    }
  ],
  "objectPaintInvalidations": [
    {
      "object": "LayoutText #text",
      "reason": "layoutObject removal"
    },
    {
      "object": "VerticalScrollbar",
      "reason": "scroll"
    },
    {
      "object": "LayoutBlockFlow HTML",
      "reason": "forced by layout"
    },
    {
      "object": "LayoutBlockFlow DIV id='to-be-changed'",
      "reason": "full"
    },
    {
      "object": "RootInlineBox",
      "reason": "full"
    },
    {
      "object": "LayoutText #text",
      "reason": "layoutObject insertion"
    },
    {
      "object": "InlineTextBox 'After change'",
      "reason": "layoutObject insertion"
    }
  ]
}
