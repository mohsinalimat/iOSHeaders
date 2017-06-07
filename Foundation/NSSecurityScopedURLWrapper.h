//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>
{
    _Bool _readonly;
    _Bool _backedByFileProvider;
    _Bool _wasProvidedAsData;
    NSData *_scope;
    NSURL *_url;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
    NSString *_itemIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic) _Bool wasProvidedAsData; // @synthesize wasProvidedAsData=_wasProvidedAsData;
@property(readonly, nonatomic, getter=isBackedByFileProvider) _Bool backedByFileProvider; // @synthesize backedByFileProvider=_backedByFileProvider;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSData *_scope; // @synthesize _scope;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 scope:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 extensionClass:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;

@end
