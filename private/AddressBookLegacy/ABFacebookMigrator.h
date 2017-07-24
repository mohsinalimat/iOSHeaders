//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@interface ABFacebookMigrator : NSObject
{
    _Bool _mayHaveFacebookContacts;
    int _mergeDestinationSourceID;
    long long _facebookContactsCount;
    NSString *_destinationDescription;
    void *_addressBook;
    ACAccountStore *_accountStore;
    void *_facebookSource;
}

+ (_Bool)_performQuery:(id)arg1 withStoreID:(int)arg2 connection:(struct CPSqliteConnection *)arg3;
+ (int)_findFacebookStoreID:(struct CPSqliteConnection *)arg1;
+ (_Bool)removeFacebookSensitiveInformation:(struct CPSqliteConnection *)arg1;
+ (_Bool)mayHaveFacebookContacts:(void *)arg1;
+ (_Bool)isAccountTypeFacebook:(id)arg1;
+ (_Bool)isSourceFacebook:(void *)arg1;
@property(nonatomic) _Bool mayHaveFacebookContacts; // @synthesize mayHaveFacebookContacts=_mayHaveFacebookContacts;
@property(nonatomic) int mergeDestinationSourceID; // @synthesize mergeDestinationSourceID=_mergeDestinationSourceID;
@property(nonatomic) void *facebookSource; // @synthesize facebookSource=_facebookSource;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSString *destinationDescription; // @synthesize destinationDescription=_destinationDescription;
@property(nonatomic) long long facebookContactsCount; // @synthesize facebookContactsCount=_facebookContactsCount;
- (void).cxx_destruct;
- (_Bool)_removeContactsAccount:(void *)arg1;
- (_Bool)_mergeContactsFromAccount:(void *)arg1 toDestinationSourceID:(int)arg2;
- (void)performPendingMergeOrDeleteAction;
- (void)_startDatabaseDoctorToPerformAction:(id)arg1;
- (int)findBestMergeDestinationSourceID;
- (_Bool)_detectFacebookContacts;
- (void)deleteFacebookContacts;
- (void)mergeFacebookContacts;
- (_Bool)canMergeFacebookContacts;
@property(nonatomic, getter=isCheckDone) _Bool checkDone;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;

@end

