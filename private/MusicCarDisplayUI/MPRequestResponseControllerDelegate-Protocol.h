//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MPRequestResponseController, NSError;

@protocol MPRequestResponseControllerDelegate <NSObject>

@optional
- (_Bool)controller:(MPRequestResponseController *)arg1 shouldRetryFailedRequestWithError:(NSError *)arg2;
- (void)controller:(MPRequestResponseController *)arg1 defersResponseReplacement:(void (^)(void))arg2;
@end

