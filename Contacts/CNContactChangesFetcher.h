//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CNContactChangesFetcher : NSObject
{
    _Bool _unify;
    NSSet *_identifiers;
    NSSet *_keysToFetch;
}

@property(nonatomic) _Bool unify; // @synthesize unify=_unify;
@property(retain, nonatomic) NSSet *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) NSSet *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;

@end
