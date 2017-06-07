//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(_Bool)arg2 error:(id *)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFileObjectID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long rawID;
@property(readonly, nonatomic) NSNumber *documentID;
@property(readonly, nonatomic) NSNumber *folderID;
@property(readonly, nonatomic) _Bool isDocumentID;
@property(readonly, nonatomic) _Bool isFolderOrAliasID;

@end

