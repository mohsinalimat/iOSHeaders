//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMMouseEvent.h>

@interface DOMWheelEvent : DOMMouseEvent
{
}

- (void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(_Bool)arg8 altKey:(_Bool)arg9 shiftKey:(_Bool)arg10 metaKey:(_Bool)arg11;
@property(readonly) _Bool isHorizontal;
- (_Bool)webkitDirectionInvertedFromDevice;
@property(readonly) int wheelDelta;
@property(readonly) int wheelDeltaY;
@property(readonly) int wheelDeltaX;
- (unsigned int)deltaMode;
- (double)deltaZ;
- (double)deltaY;
- (double)deltaX;

@end

