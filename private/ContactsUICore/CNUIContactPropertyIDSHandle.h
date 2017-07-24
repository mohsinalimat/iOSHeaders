//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSHandle-Protocol.h>

@class CNContactProperty, NSString;

@interface CNUIContactPropertyIDSHandle : NSObject <CNUIIDSHandle>
{
    CNContactProperty *_contactProperty;
    NSString *_idsID;
}

+ (id)idsIDForEmail:(id)arg1;
+ (id)idsIDForPhoneNumber:(id)arg1;
+ (id)supportedContactPropertyKeys;
@property(readonly, copy, nonatomic) NSString *idsID; // @synthesize idsID=_idsID;
@property(readonly, copy, nonatomic) CNContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
- (id)initWithContactProperty:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

