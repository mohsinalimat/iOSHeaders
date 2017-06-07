//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADLATStatusManager : ADSingleton
{
    _Bool _sendingLATToAdPlatforms;
    _Bool _sendingLATToJingle;
    NSNumber *_pendingJingleRequestToken;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSNumber *pendingJingleRequestToken; // @synthesize pendingJingleRequestToken=_pendingJingleRequestToken;
@property(nonatomic) _Bool sendingLATToJingle; // @synthesize sendingLATToJingle=_sendingLATToJingle;
@property(nonatomic) _Bool sendingLATToAdPlatforms; // @synthesize sendingLATToAdPlatforms=_sendingLATToAdPlatforms;
- (void).cxx_destruct;
- (id)handleJingleOptOutResponse:(id)arg1;
- (void)sendLATStatusToJingle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendLATStatusToAdPlatforms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
