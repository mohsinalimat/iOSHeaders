//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject
{
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

@property(retain, nonatomic) NSMutableDictionary *selectorToPropertyMap; // @synthesize selectorToPropertyMap=_selectorToPropertyMap;
@property(retain, nonatomic) NSMutableDictionary *propertyNameToPropertyMap; // @synthesize propertyNameToPropertyMap=_propertyNameToPropertyMap;
- (id)description;
- (void)dealloc;
- (id)init;

@end

