//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class KNSlideNode, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface KNSlideCollectionSelection : TSKSelection
{
    NSOrderedSet *mSlideNodes;
    KNSlideNode *mSlideNodeToEdit;
}

+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) KNSlideNode *slideNodeToEdit; // @synthesize slideNodeToEdit=mSlideNodeToEdit;
@property(readonly, nonatomic) NSOrderedSet *slideNodes; // @synthesize slideNodes=mSlideNodes;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)UUIDDescription;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithSlideNode:(id)arg1;
- (id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2;
- (void)saveToArchive:(struct SlideCollectionSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct SlideCollectionSelectionArchive *)arg1 unarchiver:(id)arg2;

@end

