//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServerDocsProtocol/DCCachedItem.h>

#import <ServerDocsProtocol/DCCachedDirectory-Protocol.h>

@class NSArray;

@interface DCCachedDirectory : DCCachedItem <DCCachedDirectory>
{
}

+ (id)_contentsWithFixedConstantsFromContentsPropertyListData:(id)arg1;
- (id)_fileSystemMetadataWithoutNeedingLocking;
- (id)_parentContentsMetadataForChildAtRelativePath:(id)arg1;
@property(readonly, retain) NSArray *localItems;
@property(readonly, retain) NSArray *contents;
- (_Bool)isDropBox;
- (id)_directoryPath;
- (id)_localGenerationIdentifierFullPath;
- (id)_localGenerationIdentifier;
- (id)_contentsFullPath;

@end

