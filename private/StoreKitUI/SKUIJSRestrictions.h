//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSRestrictions-Protocol.h>

@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions>
{
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;
- (void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1:(id)arg2;
- (void)setAllowExplicitContent;
- (void)isRestrictionsPasscodeSet:(id)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
- (_Bool)isRestrictedApp:(id)arg1;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;

@end

