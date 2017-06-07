//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class BRFileObjectID, NSArray;

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying>
{
    BRFileObjectID *_folderID;
    unsigned long long _uploadCompletedSize;
    unsigned long long _uploadTotalSize;
    unsigned long long _downloadCompletedSize;
    unsigned long long _downloadTotalSize;
    NSArray *_parentFileIDs;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long downloadTotalSize; // @synthesize downloadTotalSize=_downloadTotalSize;
@property(nonatomic) unsigned long long downloadCompletedSize; // @synthesize downloadCompletedSize=_downloadCompletedSize;
@property(nonatomic) unsigned long long uploadTotalSize; // @synthesize uploadTotalSize=_uploadTotalSize;
@property(nonatomic) unsigned long long uploadCompletedSize; // @synthesize uploadCompletedSize=_uploadCompletedSize;
@property(copy, nonatomic) BRFileObjectID *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSArray *parentFileIDs; // @synthesize parentFileIDs=_parentFileIDs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

