//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPStreamingDistributableUnarchiver-Protocol.h>

@class NSString, TSPDatabase, TSPDistributableFileManager;

__attribute__((visibility("hidden")))
@interface TSPDistributableReader : NSObject <TSPStreamingDistributableUnarchiver>
{
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    _Bool _hasReadTangierVersionRoot;
    // Error parsing type: AB, name: _isCancelled
}

+ (_Bool)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int *)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (_Bool)_initializeNewDocumentDirectory:(id)arg1;
- (_Bool)handleFileDescriptorProtoWithInputStream:(id)arg1 length:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)handleClassInfoWithClassType:(int)arg1 className:(id)arg2 isProtobufClass:(_Bool)arg3 error:(id *)arg4;
- (_Bool)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(id)arg2 version:(unsigned int)arg3 classType:(int)arg4 stream:(id)arg5 length:(long long)arg6 relationshipTargets:(long long *)arg7 relationshipCount:(unsigned int)arg8 error:(id *)arg9;
- (_Bool)handleArchivedVersions:(CDStruct_4bcfbbae)arg1 error:(id *)arg2;
- (_Bool)readFromDistributableArchiveStream:(id)arg1 estimatedDataLength:(long long)arg2 supplementalDataBundle:(id)arg3 error:(id *)arg4;
- (void)cancel;
- (id)initWithDestinationPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

