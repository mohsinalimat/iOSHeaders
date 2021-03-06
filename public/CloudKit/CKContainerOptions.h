//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAccountOverrideInfo;

@interface CKContainerOptions : NSObject
{
    _Bool _captureResponseHTTPHeaders;
    _Bool _useZoneWidePCS;
    _Bool _wantsSiloedContext;
    _Bool _returnPCSMetadata;
    _Bool _useMMCSEncryptionV2;
    _Bool _bypassPCSEncryption;
    _Bool _enforceNamedOperationGroups;
    CKAccountOverrideInfo *_accountInfoOverride;
}

@property(nonatomic) _Bool enforceNamedOperationGroups; // @synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups;
@property(nonatomic) _Bool bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(nonatomic) _Bool useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(nonatomic) _Bool returnPCSMetadata; // @synthesize returnPCSMetadata=_returnPCSMetadata;
@property(copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
@property(nonatomic) _Bool wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(nonatomic) _Bool useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(nonatomic) _Bool captureResponseHTTPHeaders; // @synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders;
- (void).cxx_destruct;

@end

