//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class UIInteractionProgress;

@protocol UIInteractionProgressObserver <NSObject>

@optional
- (void)interactionProgress:(UIInteractionProgress *)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(UIInteractionProgress *)arg1;
@end

