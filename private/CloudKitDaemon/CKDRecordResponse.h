//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface CKDRecordResponse : NSObject
{
    CKRecordID *_recordID;
    NSString *_etag;
    CKRecord *_record;
}

@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;

@end

