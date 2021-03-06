//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaOffer-Protocol.h>

@class NSData, NSString, _SFPBActionItem, _SFPBImage;

@interface _SFPBMediaOffer : PBCodable <_SFPBMediaOffer, NSSecureCoding>
{
    CDStruct_c119988d _has;
    _Bool _isEnabled;
    _SFPBActionItem *_actionItem;
    NSString *_sublabel;
    NSString *_offerIdentifier;
    _SFPBImage *_image;
}

@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(copy, nonatomic) NSString *sublabel; // @synthesize sublabel=_sublabel;
@property(retain, nonatomic) _SFPBActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasIsEnabled;
@property(readonly, nonatomic) _Bool hasOfferIdentifier;
@property(readonly, nonatomic) _Bool hasSublabel;
@property(readonly, nonatomic) _Bool hasActionItem;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

