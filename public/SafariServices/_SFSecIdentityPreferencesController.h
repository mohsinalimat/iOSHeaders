//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject
{
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)ephemeralSecIdentityPreferencesController;
+ (id)sharedPersistentSecIdentityPreferencesController;
- (void).cxx_destruct;
- (id)_initUsingEphemeralStorage:(_Bool)arg1;
- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(_Bool)arg1 forDomainAndPort:(id)arg2;
- (_Bool)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1;

@end
