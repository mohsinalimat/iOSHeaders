//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : NSObject
{
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    NSString *_plistPath;
}

+ (id)sharedManager;
- (void)_loadDictionariesIfNeeded;
- (id)emailAddressForKey:(id)arg1;
- (id)keyForEmailAddress:(id)arg1;
- (void)dealloc;

@end

