//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASFriend, HKSample;

@interface ASActivityDataNotification : NSObject
{
    ASFriend *_friend;
    HKSample *_sample;
}

@property(retain, nonatomic) HKSample *sample; // @synthesize sample=_sample;
@property(retain, nonatomic) ASFriend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;

@end

