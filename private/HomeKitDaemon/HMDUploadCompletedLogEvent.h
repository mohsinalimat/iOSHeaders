//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent
{
    NSError *_error;
}

+ (id)uploadCompletedWithError:(id)arg1;
+ (id)uuid;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initUploadWithError:(id)arg1;

@end

