//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLocale.h>

__attribute__((visibility("hidden")))
@interface NSAutoLocale : NSLocale
{
    NSLocale *loc;
    struct _opaque_pthread_mutex_t _lock;
}

+ (_Bool)supportsSecureCoding;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)_setNullLocale;
- (unsigned char)_nullLocale;
- (id)_prefs;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)_init;
- (void)_update:(id)arg1;

@end

