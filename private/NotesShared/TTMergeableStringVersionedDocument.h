//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument
{
    TTMergeableAttributedString *_mergeableString;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(retain, nonatomic) TTMergeableAttributedString *mergeableString; // @synthesize mergeableString=_mergeableString;
- (void).cxx_destruct;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithStringVersionedDocument:(id)arg1;
- (id)initWithArchive:(const Document_0e94f2f5 *)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;

@end

