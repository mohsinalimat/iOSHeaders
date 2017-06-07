//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSNumber, NSString;

@interface ASDManagedApplicationRequestOptions : ASDRequestOptions
{
    _Bool _skipDownloads;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_itemIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool skipDownloads; // @synthesize skipDownloads=_skipDownloads;
@property(readonly, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(_Bool)arg5;

@end

