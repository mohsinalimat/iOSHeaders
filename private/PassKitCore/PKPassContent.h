//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKContent.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, PKImage, PKPassPersonalization;

@interface PKPassContent : PKContent <NSSecureCoding>
{
    long long _transitType;
    PKImage *_footerImage;
    NSString *_logoText;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
    PKPassPersonalization *_personalization;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) PKPassPersonalization *personalization; // @synthesize personalization=_personalization;
@property(copy, nonatomic) NSArray *backFieldBuckets; // @synthesize backFieldBuckets=_backFieldBuckets;
@property(copy, nonatomic) NSArray *frontFieldBuckets; // @synthesize frontFieldBuckets=_frontFieldBuckets;
@property(copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(retain, nonatomic) PKImage *footerImage; // @synthesize footerImage=_footerImage;
@property(nonatomic) long long transitType; // @synthesize transitType=_transitType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end
