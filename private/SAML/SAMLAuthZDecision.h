//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSString, SAMLEvidence;

__attribute__((visibility("hidden")))
@interface SAMLAuthZDecision : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) SAMLEvidence *evidence;
@property(readonly, nonatomic) NSArray *actions;
@property(readonly, nonatomic) NSString *resource;
@property(readonly, nonatomic) NSString *decision;

@end

