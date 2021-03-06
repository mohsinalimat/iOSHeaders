//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFIMAPFetchResult, NSString;
@protocol MFDataConsumer;

@interface _MFIMAPFetchUnit : NSObject
{
    MFIMAPFetchResult *_expectedFetchResult;
    unsigned int _uid;
    id <MFDataConsumer> _bodyDataConsumer;
    NSString *_consumerSection;
    NSString *_fetchItem;
}

@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *fetchItem; // @synthesize fetchItem=_fetchItem;
@property(retain, nonatomic) NSString *consumerSection; // @synthesize consumerSection=_consumerSection;
@property(retain, nonatomic) id <MFDataConsumer> bodyDataConsumer; // @synthesize bodyDataConsumer=_bodyDataConsumer;
- (id)copyFailedFetchResponse;
- (_Bool)matchesFetchResponse:(id)arg1;
- (void)_setupExpectedFetchResult;
- (void)dealloc;

@end

