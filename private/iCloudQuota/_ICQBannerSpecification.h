//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _ICQBannerSpecification : NSObject
{
    NSDictionary *_serverDict;
    _Bool _hasDismissButtonDefault;
    NSString *_title;
    NSString *_messageFormat;
    NSArray *_messageLinks;
}

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;
@property(nonatomic) _Bool hasDismissButtonDefault; // @synthesize hasDismissButtonDefault=_hasDismissButtonDefault;
@property(retain, nonatomic) NSArray *messageLinks; // @synthesize messageLinks=_messageLinks;
@property(retain, nonatomic) NSString *messageFormat; // @synthesize messageFormat=_messageFormat;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *serverDict;
- (void)setMessageWithServerMessage:(id)arg1;
- (id)initWithServerDictionary:(id)arg1;

@end

