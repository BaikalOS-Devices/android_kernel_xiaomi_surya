
#ifdef CONFIG_SCHED_TUNE

#include <linux/reciprocal_div.h>

/*
 * System energy normalization constants
 */
struct target_nrg {
	unsigned long min_power;
	unsigned long max_power;
	struct reciprocal_value rdiv;
};

int schedtune_cpu_boost(int cpu);
int schedtune_cpu_util_min(int cpu);
int schedtune_cpu_util_max(int cpu);

int schedtune_task_boost(struct task_struct *tsk);
int schedtune_task_boost_rcu_locked(struct task_struct *tsk);

int schedtune_prefer_idle(struct task_struct *tsk);
int schedtune_prefer_high_cap(struct task_struct *tsk);
int schedtune_util_min(struct task_struct *tsk);
int schedtune_util_max(struct task_struct *tsk);

void schedtune_enqueue_task(struct task_struct *p, int cpu);
void schedtune_dequeue_task(struct task_struct *p, int cpu);

#else /* CONFIG_SCHED_TUNE */

#define schedtune_cpu_boost(cpu)  0
#define schedtune_task_boost(tsk) 0

#define schedtune_prefer_idle(tsk) 0
#define schedtune_prefer_high_cap(tsk) 0

#define schedtune_enqueue_task(task, cpu) do { } while (0)
#define schedtune_dequeue_task(task, cpu) do { } while (0)

#endif /* CONFIG_SCHED_TUNE */
