//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding>
{
}

+ (id)specification;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
@property(readonly, nonatomic) Class transitionContextClass;
@property(readonly, nonatomic) Class clientSettingsClass;
@property(readonly, nonatomic) Class settingsClass;
@property(readonly, nonatomic) Class clientAgentClass;
@property(readonly, nonatomic) Class hostAgentClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

