//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKKeychainItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
}

@property(retain, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData;
- (void).cxx_destruct;
- (void)writeToKeychain;
- (id)secItemFormatToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (void)resetKeychainItem;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

