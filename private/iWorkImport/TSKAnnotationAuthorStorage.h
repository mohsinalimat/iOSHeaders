//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface TSKAnnotationAuthorStorage : TSPObject
{
    NSMutableSet *mAuthors;
}

@property(readonly, nonatomic) NSSet *authors; // @synthesize authors=mAuthors;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (id)description;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (id)currentAuthorColorWithKey:(id)arg1;
- (long long)indexForColorKey:(id)arg1 usedColors:(id)arg2;
- (_Bool)p_withToleranceDoesColorSet:(id)arg1 containColor:(id)arg2;
- (long long)p_hashCodeForColorKey:(id)arg1;
- (id)nextAuthorColor;
- (id)authorInStorageAddingAuthorIfNecessary:(id)arg1;
- (id)authorInStorageMatchingAuthor:(id)arg1;
- (id)preferredAuthorMatchingPrivateID:(id)arg1 name:(id)arg2;
- (id)authorsMatchingPrivateID:(id)arg1;
- (void)removeAuthor:(id)arg1;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(_Bool)arg2;
- (void)addAuthor:(id)arg1;
- (void)dealloc;

@end

