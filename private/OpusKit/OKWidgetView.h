//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetViewProxy.h>

@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy
{
    OKRoundProgressView *_roundProgressView;
}

- (void)updateProgressIndicator:(double)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (_Bool)isActivityIndicatorVisible;
- (_Bool)downloadIndicatorEnabled;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canRespondToEventWithPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (void)commonInit;

@end

