//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKContentPlayRequest : WLKRequest
{
    NSString *_canonicalID;
}

@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCanonicalID:(id)arg1;

@end

