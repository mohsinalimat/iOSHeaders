//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface MPURemoteApplicationActivity : NSObject
{
    void *_mediaRemoteActivity;
}

@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSString *secondaryAppDisplayID;
@property(readonly, nonatomic) NSString *primaryAppDisplayID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMediaRemoteActivity:(void *)arg1;
- (id)init;

@end

