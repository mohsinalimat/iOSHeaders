//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPFragmentationStream, HMFMessage, NSDate, NSString;

@interface HMDFragmentationStreamTuple : NSObject
{
    HAPFragmentationStream *_fragmentationStream;
    NSString *_homeUUID;
    HMFMessage *_lastMessage;
    NSDate *_expirationDate;
}

+ (id)tupleWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) HMFMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(readonly, nonatomic) NSString *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) HAPFragmentationStream *fragmentationStream; // @synthesize fragmentationStream=_fragmentationStream;
- (void).cxx_destruct;
- (void)close;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithFragmentationStreamForHome:(id)arg1 delegate:(id)arg2;

@end

