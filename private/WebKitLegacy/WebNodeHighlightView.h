//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (id)webNodeHighlight;
- (void)layoutSublayers:(id)arg1;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;
- (_Bool)isFlipped;
- (void)detachFromWebNodeHighlight;
- (void)dealloc;
- (id)initWithWebNodeHighlight:(id)arg1;
- (void)_removeAllLayers;

@end

