//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSDisplayLayoutElement, NSString;

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding>
{
    Class _elementClass;
    NSString *_identifier;
    FBSDisplayLayoutElement *_element;
    unsigned long long _displayType;
    _Bool _activated;
}

@property(readonly, nonatomic) Class elementClass; // @synthesize elementClass=_elementClass;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) FBSDisplayLayoutElement *element; // @synthesize element=_element;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)deactivate;
- (void)updateWithBuilder:(CDUnknownBlockType)arg1;
- (void)activateWithBuilder:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)dealloc;
- (id)initWithDisplayType:(unsigned long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

