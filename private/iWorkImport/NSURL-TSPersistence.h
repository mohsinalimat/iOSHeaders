//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TSPersistence)
- (_Bool)tsp_getIsUbiquitousValue:(_Bool *)arg1 promised:(_Bool)arg2 error:(id *)arg3;
- (_Bool)tsp_isUbiquitous;
- (id)tsp_URLExceptPrivate;
- (id)tsp_pathExceptPrivate;
- (id)tsp_fileIdentifier;
- (id)tsp_embeddedUTI;
- (_Bool)tsp_matchesURL:(id)arg1 canCompareFileID:(_Bool)arg2;
- (_Bool)tsp_matchesURL:(id)arg1;
- (_Bool)tsp_isIWorkAVAssetURL;
@end

