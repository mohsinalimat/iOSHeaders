//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _available;
    NSURL *_fileURL;
    NSString *_fingerPrint;
    unsigned long long _fileSize;
    NSString *_fileUTI;
    struct CGSize _imageDimensions;
}

+ (id)identityForStorageName:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id *)arg3;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (Class)_identityImplementationClass;
+ (Class)resourceIdentityImplementation;
+ (void)setResourceIdentityImplementation:(Class)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)identityForStorage;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

