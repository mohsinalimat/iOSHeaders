//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface _ICProactiveTrigger : NSObject
{
    unsigned char _triggerSourceType;
    NSSet *_recipients;
    NSString *_currentAppID;
    NSString *_localeIdentifier;
    NSDictionary *_attributedString;
    NSDictionary *_attributes;
}

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSDictionary *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, copy, nonatomic) NSString *currentAppID; // @synthesize currentAppID=_currentAppID;
@property(readonly, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;
- (void).cxx_destruct;
- (_Bool)isEqualToProactiveTrigger:(id)arg1;
- (id)description;
- (id)initWithSource:(unsigned char)arg1 attributes:(id)arg2;
- (id)initWithInputContex:(id)arg1 attributes:(id)arg2;

@end

