//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPTextMagnifierRanged.h>

@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged
{
    _Bool _shouldIgnoreTextInputEditor;
}

+ (id)sharedRangedMagnifier;
@property(nonatomic) _Bool shouldIgnoreTextInputEditor; // @synthesize shouldIgnoreTextInputEditor=_shouldIgnoreTextInputEditor;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)shouldHideCanvasLayer;
- (id)maskImageName;
- (id)overlayImageName;
- (id)underlayImageName;
- (void)stopMagnifying:(_Bool)arg1;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(_Bool)arg4;
- (void)remove;
- (void)updateFrame;
- (double)currentOffset;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (void)dealloc;
- (id)initWithDefaultFrame;

@end

