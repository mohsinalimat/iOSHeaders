//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/LSResourceProxy.h>

#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding>
{
    _Bool _sourceIsManaged;
    NSString *_containerOwnerApplicationIdentifier;
    NSURL *_URL;
    NSString *_name;
    NSString *_typeIdentifier;
    NSString *_MIMEType;
}

+ (_Bool)supportsSecureCoding;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(_Bool)arg4;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(_Bool)arg2;
@property(readonly, nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)description;
- (id)iconStyleDomain;
- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *containerOwnerApplicationIdentifier; // @synthesize containerOwnerApplicationIdentifier=_containerOwnerApplicationIdentifier;
- (_Bool)isImageOrVideo;
- (void)dealloc;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 sourceIsManaged:(_Bool)arg5;
- (id)applicationsAvailableForOpeningWithTypeOwner:(_Bool)arg1 airDropStyle:(_Bool)arg2;
- (id)boundDocumentProxy;

@end
