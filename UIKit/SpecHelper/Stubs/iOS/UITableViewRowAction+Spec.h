#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^PCKTableViewRowActionHandler)(UIContextualAction * __nonnull action, NSIndexPath * __nonnull indexPath);

@interface UITableViewRowAction (Spec)

@property (nonatomic, readonly, nullable) PCKTableViewRowActionHandler handler;

@end

NS_ASSUME_NONNULL_END
