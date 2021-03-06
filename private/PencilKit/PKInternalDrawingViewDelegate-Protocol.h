//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKDrawing, PKStroke, UITouch;

@protocol PKInternalDrawingViewDelegate <NSObject>
- (void)didFinishRenderingStroke:(PKStroke *)arg1 inDrawing:(PKDrawing *)arg2;
- (void)willBeginDrawingWithTouch:(UITouch *)arg1;
- (_Bool)canBeginDrawingWithTouch:(UITouch *)arg1;
- (void)renderingDidFinish;
- (void)drawingDidChange:(PKDrawing *)arg1;
- (void)setIsDrawing:(_Bool)arg1;
@end

