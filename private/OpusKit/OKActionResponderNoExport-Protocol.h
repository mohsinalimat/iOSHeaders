//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSString, OFUIView, OKAction;

@protocol OKActionResponderNoExport <NSObject>
@property(readonly) OFUIView *actionView;
- (_Bool)interactivityEnabled;
- (_Bool)performActionScript:(NSString *)arg1 withAction:(OKAction *)arg2;
- (_Bool)canPerformAction:(OKAction *)arg1;
@end

