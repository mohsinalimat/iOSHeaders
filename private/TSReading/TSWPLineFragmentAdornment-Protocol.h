//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@protocol TSWPLineFragmentAdornment <NSObject>
@property(readonly, nonatomic) _Bool isBackground;
- (void)drawAdornmentForFragment:(const struct TSWPLineFragment *)arg1 inContext:(struct CGContext *)arg2 withFlags:(unsigned int)arg3 state:(const struct TSWPDrawingState *)arg4 bounds:(struct CGRect)arg5;
@end

