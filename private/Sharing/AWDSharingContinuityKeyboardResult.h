//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingContinuityKeyboardResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _bannerVisibleMs;
    unsigned int _beginEditingCount;
    unsigned int _closeAction;
    unsigned int _endEditingCount;
    unsigned int _mainUIVisibleMs;
    unsigned int _openAction;
    NSString *_sessionUUID;
    _Bool _directInput;
    _Bool _externalInput;
    _Bool _secureInput;
    struct {
        unsigned int timestamp:1;
        unsigned int bannerVisibleMs:1;
        unsigned int beginEditingCount:1;
        unsigned int closeAction:1;
        unsigned int endEditingCount:1;
        unsigned int mainUIVisibleMs:1;
        unsigned int openAction:1;
        unsigned int directInput:1;
        unsigned int externalInput:1;
        unsigned int secureInput:1;
    } _has;
}

@property(nonatomic) unsigned int mainUIVisibleMs; // @synthesize mainUIVisibleMs=_mainUIVisibleMs;
@property(nonatomic) unsigned int bannerVisibleMs; // @synthesize bannerVisibleMs=_bannerVisibleMs;
@property(nonatomic) _Bool externalInput; // @synthesize externalInput=_externalInput;
@property(nonatomic) _Bool directInput; // @synthesize directInput=_directInput;
@property(nonatomic) _Bool secureInput; // @synthesize secureInput=_secureInput;
@property(nonatomic) unsigned int endEditingCount; // @synthesize endEditingCount=_endEditingCount;
@property(nonatomic) unsigned int beginEditingCount; // @synthesize beginEditingCount=_beginEditingCount;
@property(nonatomic) unsigned int closeAction; // @synthesize closeAction=_closeAction;
@property(nonatomic) unsigned int openAction; // @synthesize openAction=_openAction;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMainUIVisibleMs;
@property(nonatomic) _Bool hasBannerVisibleMs;
@property(nonatomic) _Bool hasExternalInput;
@property(nonatomic) _Bool hasDirectInput;
@property(nonatomic) _Bool hasSecureInput;
@property(nonatomic) _Bool hasEndEditingCount;
@property(nonatomic) _Bool hasBeginEditingCount;
@property(nonatomic) _Bool hasCloseAction;
@property(nonatomic) _Bool hasOpenAction;
@property(readonly, nonatomic) _Bool hasSessionUUID;
@property(nonatomic) _Bool hasTimestamp;

@end

