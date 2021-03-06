//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemAttribute : NSObject <NSCopying>
{
    NSString *_name;
    unsigned long long _attributeType;
    NSString *_attributeValueClassName;
    const struct __CFString *_secItemAttributeKey;
    id _defaultValue;
}

@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) const struct __CFString *secItemAttributeKey; // @synthesize secItemAttributeKey=_secItemAttributeKey;
@property(copy, nonatomic) NSString *attributeValueClassName; // @synthesize attributeValueClassName=_attributeValueClassName;
@property(nonatomic) unsigned long long attributeType; // @synthesize attributeType=_attributeType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

