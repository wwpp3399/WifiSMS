/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;



@interface PSListItemsController : PSListController 
{
    NSInteger _rowToSelect;
    BOOL _deferItemSelection;
    PSSpecifier *_lastSelectedSpecifier;
}


- (void)viewWillRedisplay;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)scrollToSelectedCell;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)dealloc;
- (void)suspend;
- (void)setSpecifiers:(id)arg1;
- (BOOL)preferencesTable:(id)arg1 isRow:(NSInteger)arg2 checkedInRadioGroup:(NSInteger)arg3;
- (BOOL)preferencesTable:(id)arg1 isRadioGroup:(NSInteger)arg2;
- (id)table:(id)arg1 cellForRow:(NSInteger)arg2 column:(id)arg3;
- (void)listItemSelected:(id)arg1;
- (void)tableSelectionDidChange:(id)arg1;
- (void)_addStaticText:(id)arg1;
- (id)itemsFromParent;
- (id)itemsFromDataSource;
- (id)specifiers;

@end
