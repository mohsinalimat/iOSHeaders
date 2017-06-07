//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/NoteCollectionObject.h>

#import <Notes/ICLegacyAccount-Protocol.h>

@class NSDictionary, NSNumber, NSSet, NSString, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject <ICLegacyAccount>
{
    NSDictionary *_constraints;
    NSNumber *_preventMovingNotesToOtherAccounts;
}

@property(retain, nonatomic) NSDictionary *constraints; // @synthesize constraints=_constraints;
- (void).cxx_destruct;
- (void)didTurnIntoFault;
- (_Bool)validateDefaultStore:(id *)arg1 error:(id *)arg2;
- (_Bool)shouldMarkNotesAsDeleted;
@property(retain, nonatomic) NSString *pathToConstraintsPlist;
@property(readonly, nonatomic) _Bool preventMovingNotesToOtherAccounts;
@property(nonatomic) int accountType;
- (id)storeForExternalId:(id)arg1;
- (void)willSave;
- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)predicateForNotes;
- (id)noteVisibilityTestingForSearchingAccount;
- (_Bool)supportsAttachments;
- (id)defaultFolder;
- (id)folders;
- (id)emailAddress;
- (id)objectIdentifier;

// Remaining properties
@property(retain, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(retain, nonatomic) NSString *constraintsPath; // @dynamic constraintsPath;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NoteStoreObject *defaultStore; // @dynamic defaultStore;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool didChooseToMigrate; // @dynamic didChooseToMigrate;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *stores; // @dynamic stores;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;

@end

